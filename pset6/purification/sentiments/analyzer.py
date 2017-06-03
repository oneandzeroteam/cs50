import nltk

class Analyzer():

    def __init__(self, positives, negatives):
        self.tokenizer = nltk.tokenize.TweetTokenizer()
        self.positives = set()
        self.negatives = set()
        
        file_0 = open(positives,"r")
        file_1 = open(negatives,"r")
        
        for line in file_0:
                self.positives.add(line.strip)
        file_0.close()
                
        for line in file_1:
                self.negatives.add(line.strip)
        file_1.close()

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""
        tokens=self.tokenizer.tokenize(text)
        score = 0
        for token in tokens:
            if(token.lower == self.positives):
                score += 1
            elif(token.lower == self.negatives):
                score -= 1
            else:
                break

        return score 
