//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBlurEffect, UIColor, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface UIKBUndoStyling : NSObject
{
    _Bool _undoRedoIconOnly;
    _Bool _isRTL;
    _Bool _cutCopyPasteIconOnly;
    UIBlurEffect *_backgroundBlurEffect;
    UIVibrancyEffect *_backgroundVibrancyEffect;
    UIColor *_HUDbackgroundColor;
    UIColor *_HUDShadowColor;
    UIColor *_buttonGlyphColorEnabled;
    UIColor *_buttonGlyphColorPressed;
    UIColor *_buttonGlyphColorDisabled;
    UIColor *_elementBackgroundColor;
    UIColor *_elementCoverColor;
    long long _appearance;
}

@property(nonatomic) _Bool cutCopyPasteIconOnly; // @synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) _Bool undoRedoIconOnly; // @synthesize undoRedoIconOnly=_undoRedoIconOnly;
@property(retain, nonatomic) UIColor *elementCoverColor; // @synthesize elementCoverColor=_elementCoverColor;
@property(retain, nonatomic) UIColor *elementBackgroundColor; // @synthesize elementBackgroundColor=_elementBackgroundColor;
@property(retain, nonatomic) UIColor *buttonGlyphColorDisabled; // @synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled;
@property(retain, nonatomic) UIColor *buttonGlyphColorPressed; // @synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed;
@property(retain, nonatomic) UIColor *buttonGlyphColorEnabled; // @synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled;
@property(retain, nonatomic) UIColor *HUDShadowColor; // @synthesize HUDShadowColor=_HUDShadowColor;
@property(retain, nonatomic) UIColor *HUDbackgroundColor; // @synthesize HUDbackgroundColor=_HUDbackgroundColor;
@property(retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect; // @synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect;
@property(retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
- (void)createDynamicColors;
- (id)vibrancyEffectForBlur:(id)arg1;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2;

@end

