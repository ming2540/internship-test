ตอนที่ 1
เขียนโปรแกรมเพื่อเล่นเกม Hangman ใน Terminal/Console (Command Line Interface) โดยมีความสามารถ อย่างน้อยต่อไปนี้
เลือกหมวดหมู่ของคำได้ โดยเก็บคำในแต่ละหมวดหมู่แยกเป็นไฟล์ หมวดหมู่ละ 1 ไฟล์ โปรแกรมที่ส่งมาให้ตรวจจะต้องมีหมวดหมู่อย่างน้อย 2 หมวดหมู่ และมีคำในหมวดหมู่อย่างน้อยหมวดหมู่ละ 5 คำ
“คำ” ที่ใช้เล่นเกม อาจประกอบด้วยช่องว่าง ตัวเลข และสัญลักษณ์ แต่จะไม่เป็นส่วนหนึ่งของการเล่นเกม จะต้องแสดงผลทันที (เช่น คำอาจจะเป็น “Mong 31!!” ก็จะแสดงผลว่า _ _ _ _ 31!! เป็นต้น) การเล่นเกมจะใช้ตัวอักษรภาษาอังกฤษเท่านั้น โดยเป็น case-insensitive ทั้งหมด
คำแต่ละคำ จะต้องประกอบด้วย “คำใบ้”
มีการแสดงตัวอักษรที่เดาผิด
มีการคำนวนคะแนนจากการเล่นเดาคำในแต่ละรอบ โดยจะคำนวนคะแนนอย่างไร ขึ้นกับนักศึกษา (คิดเกณฑ์/อัลกอริทึมการให้คะแนนเองได้เลย)

ตัวอย่างการรันโปรแกรม

Select Category:
English Premiere League Teams (2018/2019)
Historical World Leaders
Famous Songs

> 2

Hint: “World War II”

_ _ _ _ _ _ _ _    score 0, remaining wrong guess 10
> d
_ _ _ _ _ _ _ _    score 0, remaining wrong guess 9, wrong guessed: d
> r
_ _ r _ _ _ _ _    score 15, remaining wrong guess 9, wrong guessed: d
>

แหล่งที่มา
https://stackoverflow.com/questions/36168615/c-read-random-line-from-text-file
https://stackoverflow.com/questions/1647557/ifstream-how-to-tell-if-specified-file-doesnt-exist
cplusplus reference