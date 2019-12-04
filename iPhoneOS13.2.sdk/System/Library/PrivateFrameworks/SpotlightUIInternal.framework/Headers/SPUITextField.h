//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUISearchField.h>

@class NSArray, NSString, SPSearchEntity, SPUIHeaderBlurView, UIButton, UIImage, UIView;
@protocol SearchUITextFieldDelegate;

@interface SPUITextField : SearchUISearchField
{
    _Bool _ignoreTokensUpdate;
    NSArray *_suggestions;
    UIImage *_clearButtonImage;
    UIButton *_microphoneButton;
    long long _activeInterfaceOrientation;
    SPUIHeaderBlurView *_blurView;
    UIView *_tintView;
    NSString *_lastSearchText;
    SPSearchEntity *_lastSearchEntity;
    struct CGSize _imageSize;
}

+ (id)removeDictationCharacterInString:(id)arg1;
+ (Class)_backgroundViewClass;
+ (_Bool)_isRTL;
@property _Bool ignoreTokensUpdate; // @synthesize ignoreTokensUpdate=_ignoreTokensUpdate;
@property(retain) SPSearchEntity *lastSearchEntity; // @synthesize lastSearchEntity=_lastSearchEntity;
@property(retain) NSString *lastSearchText; // @synthesize lastSearchText=_lastSearchText;
@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain) SPUIHeaderBlurView *blurView; // @synthesize blurView=_blurView;
@property long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
@property(retain) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain) UIImage *clearButtonImage; // @synthesize clearButtonImage=_clearButtonImage;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)escapeKeyCommand;
- (id)keyCommands;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(_Bool)arg3;
@property(readonly) SPSearchEntity *searchEntity;
- (void)updateTextRange:(id)arg1;
- (void)updateToken:(id)arg1;
- (void)clearAllTokens;
- (id)textIncludingTokens;
- (_Bool)needsLandscapeHeight;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_shiftedBoundsForText:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_microphoneRectForBounds:(struct CGRect)arg1;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (struct CGSize)intrinsicContentSize;
- (id)init;

// Remaining properties
@property(retain) id <SearchUITextFieldDelegate> delegate; // @dynamic delegate;

@end

