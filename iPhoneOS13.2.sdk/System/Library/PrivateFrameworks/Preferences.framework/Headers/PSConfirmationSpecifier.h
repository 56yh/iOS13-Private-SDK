//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier
{
    NSString *_title;
    NSString *_prompt;
    NSString *_okButton;
    NSString *_cancelButton;
    NSString *_alternateButton;
}

+ (id)specifierWithSpecifier:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
@property(retain, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSString *alternateButton; // @synthesize alternateButton=_alternateButton;
@property(retain, nonatomic) NSString *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToSpecifier:(id)arg1;
- (_Bool)isAlternateDestructive;
- (_Bool)isDestructive;
- (void)setupWithDictionary:(id)arg1;

@end

