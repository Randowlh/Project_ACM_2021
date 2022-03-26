import speech_recognition as sr
def speech_to_text():
    inn="cesces.wav"
    r = sr.Recognizer()
    text=""
    with sr.AudioFile(inn) as source:
        audio = r.record(source)
    try:
        text = r.recognize_sphinx(audio,language='zh-cn')
        print("Google Speech Recognition thinks you said " + text)
    except sr.UnknownValueError:
        print("Google Speech Recognition could not understand audio")
    except sr.RequestError as e:
        print("Could not request results from Google Speech Recognition service; {0}".format(e))
    return text
print(speech_to_text())