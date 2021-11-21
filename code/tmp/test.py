# input audio output words
# using goole speech api
import speech_recognition as sr
import os
import time
def speech_to_text():
    input="in.wav"
    output="out.txt"
    r = sr.Recognizer()
    with sr.AudioFile(input) as source:
        audio = r.record(source)
    try:
        text = r.recognize_google(audio)
        print(text)
        with open(output, "w") as text_file:
            text_file.write(text)
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))
    return text

