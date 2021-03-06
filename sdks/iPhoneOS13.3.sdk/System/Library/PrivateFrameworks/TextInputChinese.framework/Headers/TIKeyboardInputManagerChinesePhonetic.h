//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputChinese/TIKeyboardInputManagerChinese.h>

#import <TextInputChinese/TIKeyboardInputManagerChineseCompletion-Protocol.h>

@class CIMCandidateData, NSArray, NSOperationQueue, NSString, TIConversionHistory, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TIMecabraIMLogger;

@interface TIKeyboardInputManagerChinesePhonetic : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion>
{
    BOOL _usesCandidateSelection;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    BOOL _isCandidateSelected;
    BOOL _acceptingCandidate;
    BOOL _isInAmbiguousMode;
    BOOL _lockingFirstPinyinSyllable;
    BOOL _filterCandidatesUsingInputIndex;
    BOOL _shouldClearBeforeContinuousPath;
    BOOL _skipSetMarkedTextDuringInput;
    TIConversionHistory *_conversionHistory;
    NSString *_remainingInput;
    NSString *_replacedAmbiguousPinyinSyllable;
    NSString *_replacementUnambiguousPinyinSyllable;
    NSString *_composedTextBeforeFirstSyllableLocked;
    NSArray *_pinyinSyllableCandidates;
    NSUInteger _selectedPinyinSyllableCandidateIndex;
    TIMecabraIMLogger *_logger;
    TIKeyboardCandidateResultSet *_mostRecentCandidateResultSetPendingDisplay;
}

+ (id)stringFallBackForTenKeyInput:(id)arg1 range:(NSRange)arg2;
+ (id)directlyCommittedCharacterSetForEmptyInline;
+ (id)stringByRemovingSyllableSeparatorsFromString:(id)arg1;
+ (id)ambiguousDefaults;
+ (id)ambiguousPinyinSet;
+ (Class)wordSearchClass;
@property(nonatomic) BOOL skipSetMarkedTextDuringInput; // @synthesize skipSetMarkedTextDuringInput=_skipSetMarkedTextDuringInput;
@property(nonatomic) BOOL shouldClearBeforeContinuousPath; // @synthesize shouldClearBeforeContinuousPath=_shouldClearBeforeContinuousPath;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *mostRecentCandidateResultSetPendingDisplay; // @synthesize mostRecentCandidateResultSetPendingDisplay=_mostRecentCandidateResultSetPendingDisplay;
@property(nonatomic) BOOL filterCandidatesUsingInputIndex; // @synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex;
@property(retain, nonatomic) TIMecabraIMLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) NSUInteger selectedPinyinSyllableCandidateIndex; // @synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex;
@property(retain, nonatomic) NSArray *pinyinSyllableCandidates; // @synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates;
@property(copy, nonatomic) NSString *composedTextBeforeFirstSyllableLocked; // @synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked;
@property(copy, nonatomic) NSString *replacementUnambiguousPinyinSyllable; // @synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable;
@property(copy, nonatomic) NSString *replacedAmbiguousPinyinSyllable; // @synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable;
@property(copy, nonatomic) NSString *remainingInput; // @synthesize remainingInput=_remainingInput;
@property(retain, nonatomic) TIConversionHistory *conversionHistory; // @synthesize conversionHistory=_conversionHistory;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL usesGeometryModelData;
- (BOOL)generateReanalysisCandidatesIfAppropriate;
- (id)locale;
- (id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2;
- (BOOL)firstSyllableLocked;
- (id)segmentedPinyinStringFromString:(id)arg1;
- (int)inputMethodType;
@property(readonly, nonatomic) TIKeyboardCandidate *candidateForInlineTextSegmentation;
@property(readonly, nonatomic, getter=isPhraseBoundarySet) BOOL phraseBoundarySet;
- (BOOL)shouldDelayUpdateComposedText;
- (void)updateComposedText;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;
- (void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2;
- (id)stringByPrependingConvertedCandidateTextToString:(id)arg1;
- (id)stringByStrippingConvertedCandidateTextFromString:(id)arg1;
@property(readonly, nonatomic) NSString *convertedInput;
@property(readonly, nonatomic) NSString *unconvertedInput;
- (id)inputStringForSearch;
- (NSRange)analysisStringRange;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)arg1;
- (BOOL)shouldLookForCompletionCandidates;
- (void)clearDynamicDictionary;
- (void)lastAcceptedCandidateCorrected;
- (id)didAcceptCandidate:(id)arg1;
- (BOOL)canStartSentenceAfterString:(id)arg1;
- (id)sentenceDelimitingCharacters;
- (void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)defaultCandidate;
- (BOOL)ignoresDeadKeys;
- (id)keyboardBehaviors;
- (void)_nop;
- (BOOL)supportsLearning;
- (BOOL)shouldExtendPriorWord;
- (BOOL)commitsAcceptedCandidate;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppliesCompletions;
- (BOOL)usesCandidateSelection;
- (BOOL)usesAutoDeleteWord;
- (id)phoneticSortingMethod;
- (id)sortingMethods;
- (BOOL)hasExtensionEmojiCandidates;
- (id)candidateResultSetByWaitingForResults:(BOOL)arg1;
- (id)candidateResultSet;
- (NSUInteger)phraseBoundary;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (void)inputLocationChanged;
- (void)clearInput;
- (void)resume;
- (id)deleteFromInput:(NSUInteger )arg1;
- (void)processDeleteInputs;
- (id)convertInputsToSyntheticInputUptoCount:(int)arg1;
- (NSUInteger)internalInputIndex;
- (NSUInteger)internalInputCount;
- (id)inputString;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (void)setInput:(id)arg1;
- (void)addInputToInternal:(id)arg1;
- (BOOL)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2;
- (id)remapInput:(id)arg1 isFacemarkInput:(BOOL )arg2;
- (long long)addTouch:(id)arg1 shouldHitTest:(BOOL)arg2;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(CGPoint)arg3 firstDelete:(NSUInteger )arg4;
- (BOOL)_shouldCommitInputDirectly:(id)arg1;
- (BOOL)isSpecialInput:(id)arg1;
- (BOOL)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1;
- (id)handleKeyboardInput:(id)arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (id)keyboardConfigurationLayoutTag;
- (void)syncToLayoutState:(id)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1 shouldBoundToInputCount:(BOOL)arg2;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (BOOL)doesComposeText;
- (id)searchStringForMarkedText;
- (id)rawInputString;
@property(readonly, copy, nonatomic) NSString *internalInputString;
- (void)revertToAmbiguousPinyinSyllable;
- (void)clearPinyinSyllableSelection;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (id)newInputManagerState;
- (BOOL)supportsPerRecipientLearning;
- (void)didDeleteCandidates:(id)arg1;
- (void)loadAddressBook;
- (void)suspend;
- (void)dealloc;
- (BOOL)supportsNumberKeySelection;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (void)checkAutocorrectionDictionaries;

@end

