//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextInputTraits_Private-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying>
{
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    unsigned int keyboardType:8;
    unsigned int keyboardAppearance:8;
    long long returnKeyType;
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    _Bool devicePasscodeEntry;
    NSString *textContentType;
    UITextInputPasswordRules *passwordRules;
    long long smartInsertDeleteType;
    long long smartQuotesType;
    long long smartDashesType;
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    UIColor *underlineColorForTextAlternatives;
    UIColor *underlineColorForSpelling;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    _Bool isSingleLineDocument;
    _Bool contentsIsSingleValue;
    _Bool acceptsEmoji;
    _Bool acceptsDictationSearchResults;
    _Bool useAutomaticEndpointing;
    _Bool showDictationButton;
    _Bool forceEnableDictation;
    _Bool forceDisableDictation;
    _Bool forceDefaultDictationInfo;
    _Bool returnKeyGoesToNextResponder;
    _Bool acceptsFloatingKeyboard;
    _Bool forceFloatingKeyboard;
    struct UIEdgeInsets floatingKeyboardEdgeInsets;
    _Bool acceptsSplitKeyboard;
    _Bool displaySecureTextUsingPlainText;
    _Bool learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    _Bool suppressReturnKeyStyling;
    _Bool useInterfaceLanguageForLocalization;
    _Bool deferBecomingResponder;
    _Bool enablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    _Bool disablePrediction;
    _Bool disableInputBars;
    _Bool isCarPlayIdiom;
    NSString *recentInputIdentifier;
    struct _NSRange validTextRange;
    long long textScriptType;
    UIInputContextHistory *inputContextHistory;
    _Bool manageRecentInputs;
    _Bool hasDefaultContents;
    _Bool acceptsPayloads;
    _Bool displaySecureEditsUsingPlainText;
    _Bool hidePrediction;
    _Bool loadKeyboardsForSiriLanguage;
    NSIndexSet *PINEntrySeparatorIndexes;
    long long forceDictationKeyboardType;
}

+ (_Bool)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1 lightweight:(_Bool)arg2;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)traitEnvironmentFromTraits:(id)arg1;
+ (id)defaultTextInputTraits;
+ (long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2;
+ (long long)accessibleAppearanceForAppearance:(long long)arg1;
+ (long long)translateToUISmartInsertDeleteEnabled:(_Bool)arg1;
+ (long long)translateToUITextScriptType:(unsigned long long)arg1;
+ (long long)translateToUIReturnKeyType:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardAppearance:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardType:(unsigned long long)arg1;
+ (long long)translateToUISpellCheckingType:(unsigned long long)arg1;
+ (long long)translateToUIAutocorrectionType:(unsigned long long)arg1;
+ (long long)translateToUIAutocapitalizationType:(unsigned long long)arg1;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage; // @synthesize loadKeyboardsForSiriLanguage;
@property(nonatomic) long long textScriptType; // @synthesize textScriptType;
@property(nonatomic) _Bool isCarPlayIdiom; // @synthesize isCarPlayIdiom;
@property(nonatomic) _Bool disableInputBars; // @synthesize disableInputBars;
@property(nonatomic) _Bool hidePrediction; // @synthesize hidePrediction;
@property(nonatomic) _Bool disablePrediction; // @synthesize disablePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory; // @synthesize inputContextHistory;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext; // @synthesize autocorrectionContext;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent; // @synthesize enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool deferBecomingResponder; // @synthesize deferBecomingResponder;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization; // @synthesize useInterfaceLanguageForLocalization;
@property(nonatomic) _Bool suppressReturnKeyStyling; // @synthesize suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType; // @synthesize shortcutConversionType;
@property(nonatomic) _Bool learnsCorrections; // @synthesize learnsCorrections;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText; // @synthesize displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText; // @synthesize displaySecureTextUsingPlainText;
@property(nonatomic) _Bool acceptsSplitKeyboard; // @synthesize acceptsSplitKeyboard;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets; // @synthesize floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceFloatingKeyboard; // @synthesize forceFloatingKeyboard;
@property(nonatomic) _Bool acceptsFloatingKeyboard; // @synthesize acceptsFloatingKeyboard;
@property(nonatomic) _Bool returnKeyGoesToNextResponder; // @synthesize returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType; // @synthesize emptyContentReturnKeyType;
@property(nonatomic) long long forceDictationKeyboardType; // @synthesize forceDictationKeyboardType;
@property(nonatomic) _Bool forceDefaultDictationInfo; // @synthesize forceDefaultDictationInfo;
@property(nonatomic) _Bool forceDisableDictation; // @synthesize forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation; // @synthesize forceEnableDictation;
@property(nonatomic) _Bool showDictationButton; // @synthesize showDictationButton;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing;
@property(nonatomic) _Bool acceptsDictationSearchResults; // @synthesize acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji; // @synthesize acceptsEmoji;
@property(nonatomic) _Bool acceptsPayloads; // @synthesize acceptsPayloads;
@property(nonatomic) _Bool hasDefaultContents; // @synthesize hasDefaultContents;
@property(nonatomic) _Bool contentsIsSingleValue; // @synthesize contentsIsSingleValue;
@property(nonatomic) _Bool isSingleLineDocument; // @synthesize isSingleLineDocument;
@property(nonatomic) int textSelectionBehavior; // @synthesize textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility; // @synthesize textLoupeVisibility;
@property(nonatomic) unsigned long long insertionPointWidth; // @synthesize insertionPointWidth;
@property(retain, nonatomic) UIColor *underlineColorForSpelling; // @synthesize underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives; // @synthesize underlineColorForTextAlternatives;
@property(retain, nonatomic) UIImage *selectionDragDotImage; // @synthesize selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor; // @synthesize selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor; // @synthesize insertionPointColor;
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // @synthesize PINEntrySeparatorIndexes;
@property(nonatomic) struct _NSRange validTextRange; // @synthesize validTextRange;
@property(nonatomic) _Bool manageRecentInputs; // @synthesize manageRecentInputs;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules; // @synthesize passwordRules;
@property(nonatomic) long long smartDashesType; // @synthesize smartDashesType;
@property(nonatomic) long long smartQuotesType; // @synthesize smartQuotesType;
@property(nonatomic) long long smartInsertDeleteType; // @synthesize smartInsertDeleteType;
@property(copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry; // @synthesize devicePasscodeEntry;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType;
- (_Bool)isEqual:(id)arg1;
- (long long)updateResultComparedToTraits:(id)arg1;
- (_Bool)publicTraitsMatchTraits:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)takeTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;
- (void)takeTraitsFrom:(id)arg1;
- (void)extendedPathToObtainTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;
- (void)fastPathToObtainTraitsFrom:(id)arg1;
- (void)setToDefaultValues;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) long long dictationInfoKeyboardType;
@property(readonly, nonatomic) long long dictationKeyboardType;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
- (id)dictionaryRepresentation;
- (void)setToSecureValues;
- (void)overlayWithTITextInputTraits:(id)arg1;
- (void)_setColorsToMatchTintColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

