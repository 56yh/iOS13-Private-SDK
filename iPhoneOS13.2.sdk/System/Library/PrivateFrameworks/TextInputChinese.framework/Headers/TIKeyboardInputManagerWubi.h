//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>

#import <TextInputChinese/TIKeyboardInputManagerChineseCompletion-Protocol.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>
{
    TIKeyboardCandidate *_autoConfirmationCandidate;
}

+ (Class)wordSearchClass;
@property(retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate; // @synthesize autoConfirmationCandidate=_autoConfirmationCandidate;
- (_Bool)supportsPairedPunctutationInput;
- (_Bool)isWubi:(id)arg1;
- (id)inputsToReject;
- (_Bool)acceptInputString:(id)arg1;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (_Bool)closeCandidateGenerationContextWithResults:(id)arg1;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)arg1;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (id)formattedSearchString;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)checkAutocorrectionDictionaries;
- (void)setInSplitKeyboardMode:(_Bool)arg1;
- (int)inputMethodType;

@end

