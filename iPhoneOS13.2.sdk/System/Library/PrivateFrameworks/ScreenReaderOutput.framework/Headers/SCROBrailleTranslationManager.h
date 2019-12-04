//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRLTTranslationService, NSString;
@protocol OS_dispatch_queue;

@interface SCROBrailleTranslationManager : NSObject
{
    _Bool _tableSupportsContractedBraille;
    _Bool _tableSupportsEightDotBraille;
    _Bool _alwaysUsesNemethCodeForTechnicalText;
    NSString *_queue_defaultLanguage;
    BRLTTranslationService *_translationService;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BRLTTranslationService *translationService; // @synthesize translationService=_translationService;
@property(nonatomic) _Bool alwaysUsesNemethCodeForTechnicalText; // @synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText;
@property(readonly, nonatomic) _Bool primaryTableSupportsEightDotBraille; // @synthesize primaryTableSupportsEightDotBraille=_tableSupportsEightDotBraille;
@property(readonly, nonatomic) _Bool primaryTableSupportsContractedBraille; // @synthesize primaryTableSupportsContractedBraille=_tableSupportsContractedBraille;
- (_Bool)primaryTableSupportsRoundTripping;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5;
@property(copy, nonatomic) NSString *defaultLanguage; // @synthesize defaultLanguage=_queue_defaultLanguage;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1 forUnitTesting:(_Bool)arg2;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1;
- (id)init;

@end

