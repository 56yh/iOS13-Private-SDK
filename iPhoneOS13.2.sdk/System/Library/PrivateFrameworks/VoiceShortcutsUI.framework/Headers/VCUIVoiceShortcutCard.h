//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cards/CRBasicCard.h>

@class INIntent, INIntentResponse, NSArray, NSString;

@interface VCUIVoiceShortcutCard : CRBasicCard
{
    NSString *_shortcutIdentifier;
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    NSArray *_sectionCommands;
}

@property(readonly, nonatomic) NSArray *sectionCommands; // @synthesize sectionCommands=_sectionCommands;
@property(readonly, nonatomic) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
- (void)loadCardWithContent:(id)arg1 completion:(id /* block */)arg2;
- (void)loadCardWithCompletion:(id /* block */)arg1;
- (_Bool)asynchronous;
- (id)cardIdentifier;
- (id)initWithShortcutIdentifier:(id)arg1 intent:(id)arg2 intentResponse:(id)arg3 commands:(id)arg4;

@end

