import speech_recognition as sr

rec = sr.Recognizer()

with sr.Microphone() as source:
    print("Say something!")
    audio = rec.listen(source)
    text = rec.recognize_google(audio)
print(text)