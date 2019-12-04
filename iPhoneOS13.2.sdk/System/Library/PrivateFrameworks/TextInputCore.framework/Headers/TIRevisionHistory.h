//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TILRUDictionary, TIRevisionHistoryToken;
@protocol TIRevisionHistoryDelegate;

@interface TIRevisionHistory : NSObject
{
    _Bool _shouldReportRevisionToDP;
    _Bool _isDeletingBackwards;
    _Bool _isRapidDeleteActive;
    id <TIRevisionHistoryDelegate> _delegate;
    TILRUDictionary *_recentAutocorrections;
    NSString *_documentText;
    NSMutableArray *_tokenization;
    void *_tokenizer;
    TIRevisionHistoryToken *_lastRejectedToken;
    struct _NSRange _selectedRange;
    struct _TIRevisionHistoryTokenIterator _currentTokenIterator;
}

+ (id)documentStateTrimmedToSentenceForState:(id)arg1;
@property(nonatomic) _Bool isRapidDeleteActive; // @synthesize isRapidDeleteActive=_isRapidDeleteActive;
@property(nonatomic) _Bool isDeletingBackwards; // @synthesize isDeletingBackwards=_isDeletingBackwards;
@property(nonatomic) _Bool shouldReportRevisionToDP; // @synthesize shouldReportRevisionToDP=_shouldReportRevisionToDP;
@property(retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken; // @synthesize lastRejectedToken=_lastRejectedToken;
@property(readonly, nonatomic) void *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(nonatomic) struct _TIRevisionHistoryTokenIterator currentTokenIterator; // @synthesize currentTokenIterator=_currentTokenIterator;
@property(readonly, nonatomic) NSMutableArray *tokenization; // @synthesize tokenization=_tokenization;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(copy, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(retain, nonatomic) TILRUDictionary *recentAutocorrections; // @synthesize recentAutocorrections=_recentAutocorrections;
@property(nonatomic) id <TIRevisionHistoryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentUserTyping;
- (id)currentWord;
- (void)enumerateSentenceStemUsingBlock:(id /* block */)arg1;
- (void)syncToDocumentState:(id)arg1;
- (_Bool)matchesDocumentState:(id)arg1;
- (_Bool)matchesContextAfterSelection:(id)arg1;
- (_Bool)matchesSelectedText:(id)arg1;
- (_Bool)matchesContextBeforeSelection:(id)arg1;
- (void)acceptCurrentSentence;
- (void)acceptText:(id)arg1 isAutoshifted:(_Bool)arg2;
- (struct _NSRange)inputRangeForReplacement:(id)arg1;
- (void)rejectCandidate:(id)arg1 forInput:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (struct _NSRange)deletionRangeToObtainDocumentState:(id)arg1;
- (id)documentState;
- (id)wordTokenContainingSelection;
- (_Bool)isWordToken:(struct _TIRevisionHistoryTokenIterator)arg1;
- (_Bool)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator)arg1;
- (void)enumerateSentenceStemUsingIteratorBlock:(id /* block */)arg1;
- (struct _TIRevisionHistoryTokenIterator)iteratorUpperBoundForSelectionStart;
- (void)resetToDocumentState:(id)arg1;
- (void)annotateTokensCreatedFromDocumentState;
- (void)replaceSelectionWithText:(id)arg1 negativeLearningHint:(int)arg2 selectedTokenReplacementHandler:(id /* block */)arg3;
- (void)mergeTokenizationsForRevision:(id)arg1;
- (void)pushSelectedTextToTokenizerForRevision:(id)arg1;
- (void)handleRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID)arg2 forRevision:(id)arg3;
- (void)addRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID)arg2 inDocumentRange:(struct _NSRange)arg3 toRevision:(id)arg4;
- (_Bool)validateTokenizationForRevisedDocumentRange:(struct _NSRange)arg1 andTokenID:(struct TITokenID)arg2 forRevision:(id)arg3;
- (struct _TIRevisionHistoryTokenIterator)resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1 withRange:(struct _NSRange)arg2 fromDocumentLocation:(unsigned long long)arg3;
- (_Bool)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator)arg1 withRevisedDocumentRange:(struct _NSRange)arg2 forRevision:(id)arg3;
- (_Bool)originalIterator:(struct _TIRevisionHistoryTokenIterator)arg1 matchesRevisedDocumentRange:(struct _NSRange)arg2 andTokenID:(struct TITokenID)arg3;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange)arg1 withDeletedCharacterCount:(unsigned long long)arg2;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange)arg1 withTokenHandler:(id /* block */)arg2;
- (struct _TIRevisionHistoryTokenIterator)popSelectedTextFromTokenizer;
- (id)nonEmptyTokensInRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _TIRevisionHistoryTokenIterator)previousTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _TIRevisionHistoryTokenIterator)nextTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _NSRange)documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)arg1;
- (void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (void)rejectTokensInRange:(struct _NSRange)arg1 negativeLearningHint:(int)arg2 newRevision:(id)arg3;
- (void)acceptTokensInRange:(struct _NSRange)arg1;
- (unsigned long long)fillTokenBuffer:(struct TITokenID *)arg1 withContextForTokenAtIndex:(unsigned long long)arg2;
- (void)rejectToken:(id)arg1 withContext:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 negativeLearningHint:(int)arg4 withRevisedToken:(id)arg5;
- (void)acceptToken:(id)arg1 withContext:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 saveToDifferentialPrivacy:(int)arg4;
- (id)initWithLocale:(id)arg1;
- (id)init;
- (void)dealloc;

@end

