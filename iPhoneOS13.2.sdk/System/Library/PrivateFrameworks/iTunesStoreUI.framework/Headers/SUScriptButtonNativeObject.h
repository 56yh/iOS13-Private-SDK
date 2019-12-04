//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject
{
    _Bool _loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;
@property(readonly, nonatomic) NSString *systemItemString; // @synthesize systemItemString=_systemItemString;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *styleString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setStyleFromString:(id)arg1;
@property(nonatomic) struct UIEdgeInsets imageInsets;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(readonly, nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation;
@property(readonly, nonatomic, getter=isBackButton) _Bool backButton;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
@property(readonly, nonatomic) int buttonType;
- (void)buttonAction:(id)arg1;
- (void)dealloc;
- (id)initWithSystemItemString:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) long long tag; // @dynamic tag;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

