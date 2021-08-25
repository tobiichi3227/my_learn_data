import pyotp
import tkinter as tk

# TODO : 新增新的驗證碼by key or QrCode
# TODO : 將資料存在json_file
# TODO : text to key

totp = pyotp.TOTP('3FB42JXTHP3ELLT3XBMS75665VIKOM65')

window = tk.Tk()
window.geometry('400x100')
window.resizable(False, False)
window.config(bg="skyblue")
window.title("陳均廷fb")

totp_str = tk.StringVar()
totp_str.set(totp.now())

# function


def create_totp():
    totp_str.set(totp.now())


# label
totp_label = tk.Label(textvariable=totp_str).pack()

# button
create_totp_bottom = tk.Button(text="生成驗證碼", command=create_totp).pack()

if __name__ == "__main__":
    window.mainloop()
