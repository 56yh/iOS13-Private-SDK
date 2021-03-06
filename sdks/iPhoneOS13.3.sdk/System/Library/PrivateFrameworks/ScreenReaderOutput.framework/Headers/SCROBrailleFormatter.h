//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/BRLTBrailleStateManagerDelegate-Protocol.h>
#import <ScreenReaderOutput/BRLTBrailleTranslationDelegateProtocol-Protocol.h>

@class BRLTBrailleStateManager, NSAttributedString;
@protocol BRLTBrailleStateManagerDelegate;

@interface SCROBrailleFormatter : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, NSCopying>
{
    BOOL _outputShowEightDot;
    BOOL _inputShowEightDot;
    BOOL _showDotsSevenAndEight;
    BOOL _currentUnread;
    BOOL _anyUnread;
    int _lineFocus;
    int _outputContractionMode;
    int _inputContractionMode;
    int _displayMode;
    id _appToken;
    long long _lineOffset;
    NSAttributedString *_statusText;
    BRLTBrailleStateManager *_stateManager;
    long long _firstToken;
    long long _lastToken;
    NSUInteger _generationID;
    id <BRLTBrailleStateManagerDelegate> _outputDelegate;
}

+ (void)resetEditingManager;
@property(nonatomic) __weak id <BRLTBrailleStateManagerDelegate> outputDelegate; // @synthesize outputDelegate=_outputDelegate;
@property(readonly, nonatomic) NSUInteger generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) long long lastToken; // @synthesize lastToken=_lastToken;
@property(readonly, nonatomic) long long firstToken; // @synthesize firstToken=_firstToken;
@property(readonly, nonatomic) BRLTBrailleStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) NSAttributedString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) long long lineOffset; // @synthesize lineOffset=_lineOffset;
@property(retain, nonatomic) id appToken; // @synthesize appToken=_appToken;
@property(nonatomic) BOOL anyUnread; // @synthesize anyUnread=_anyUnread;
@property(nonatomic) BOOL currentUnread; // @synthesize currentUnread=_currentUnread;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) BOOL showDotsSevenAndEight; // @synthesize showDotsSevenAndEight=_showDotsSevenAndEight;
@property(readonly, nonatomic) BOOL inputShowEightDot; // @synthesize inputShowEightDot=_inputShowEightDot;
@property(readonly, nonatomic) BOOL outputShowEightDot; // @synthesize outputShowEightDot=_outputShowEightDot;
@property(readonly, nonatomic) int inputContractionMode; // @synthesize inputContractionMode=_inputContractionMode;
@property(readonly, nonatomic) int outputContractionMode; // @synthesize outputContractionMode=_outputContractionMode;
@property(nonatomic) int lineFocus; // @synthesize lineFocus=_lineFocus;
// - (void).cxx_destruct;
- (void)brailleDisplayDeletedCharacter:(id)arg1;
- (void)brailleDisplayInsertedCharacter:(id)arg1;
- (void)didInsertScriptString:(id)arg1;
- (void)scriptSelectionDidChange:(NSRange)arg1;
- (void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(NSUInteger)arg3;
- (void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 locations:(id )arg4;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 textPositionsRange:(NSRange)arg4 locations:(id )arg5;
- (void)translate:(BOOL)arg1;
- (void)translate;
- (NSRange)rangeOfBrailleCellRepresentingCharacterAtIndex:(NSUInteger)arg1;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange )arg4 token:(long long)arg5 focus:(NSRange )arg6 technical:(BOOL)arg7 isEditableText:(BOOL)arg8 paddingRange:(NSRange)arg9 editingString:(id)arg10;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange )arg4 token:(long long)arg5 focus:(NSRange )arg6 technical:(BOOL)arg7 isEditableText:(BOOL)arg8;
- (void)addText:(id)arg1 language:(id)arg2 selection:(NSRange )arg3 token:(long long)arg4 focus:(NSRange )arg5 technical:(BOOL)arg6 isEditableText:(BOOL)arg7;
- (void)addText:(id)arg1 selection:(NSRange )arg2 token:(long long)arg3 focus:(NSRange )arg4 technical:(BOOL)arg5 isEditableText:(BOOL)arg6;
- (void)addText:(id)arg1 language:(id)arg2 selection:(NSRange )arg3 token:(long long)arg4 focus:(NSRange )arg5 isEditableText:(BOOL)arg6;
- (void)addText:(id)arg1 selection:(NSRange )arg2 token:(long long)arg3 focus:(NSRange )arg4 isEditableText:(BOOL)arg5;
- (id)deepCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithOutputContractionMode:(int)arg1 inputContractionMode:(int)arg2 outputShowEightDot:(BOOL)arg3 inputShowEightDot:(BOOL)arg4 showDotsSevenAndEight:(BOOL)arg5;

@end

