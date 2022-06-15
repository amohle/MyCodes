from flask import Flask
app= Flask(__name__)
@app.route('/')
def hello()->str:
	return "Hello world"
@app.route('/search')
def hello2()->str:
	return "I am not hello world easy"
app.run()

