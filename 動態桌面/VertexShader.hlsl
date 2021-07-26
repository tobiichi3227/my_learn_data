// VertexShader.hlsl
struct VSOut
{
    float2 tex : TEXCOORD;
    float4 pos : SV_POSITION;
};

cbuffer CBuf
{
    matrix transform;
};

VSOut main_VS(float3 pos : POSITION, float2 tex : TEXCOORD)
{
    VSOut vsout;
    vsout.pos = float4(pos.x, pos.y, pos.z, 1);
    vsout.pos = mul(vsout.pos, transform);
    vsout.tex = tex;
    return vsout;
}
