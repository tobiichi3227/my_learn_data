# https://blog.51cto.com/xsboke/2363746
# TOTP 底層原理
import hmac
import hashlib
import base64
import struct
import time

secret = '3FB42JXTHP3ELLT3XBMS75665VIKOM65'

# secret = base64.b32encode(secret.encode('utf8'))
key = base64.b32decode(secret, True)

current_timestamp = struct.pack(">Q", int(time.time()) // 30)

hash_sha1 = hmac.new(key, current_timestamp, hashlib.sha1).digest()
O = hash_sha1[19] & 15

DynamicPasswd = str(
    (struct.unpack(">I", hash_sha1[O:O+4])[0] & 0x7fffffff) % 1000000)

TOTP = str(0) + str(DynamicPasswd) if len(DynamicPasswd) < 6 else DynamicPasswd

print(f"key  :  {key}   aaa")
print(TOTP)
