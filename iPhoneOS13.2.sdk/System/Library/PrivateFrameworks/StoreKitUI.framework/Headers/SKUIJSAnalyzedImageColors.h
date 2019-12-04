//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSAnalyzedImageColors-Protocol.h>

@class SKUIJSColor;

__attribute__((visibility("hidden")))
@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors>
{
    SKUIJSColor *_backgroundColor;
    SKUIJSColor *_textPrimaryColor;
    SKUIJSColor *_textSecondaryColor;
    _Bool _isBackgroundLight;
}

@property(readonly, nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(readonly, nonatomic) SKUIJSColor *textSecondaryColor; // @synthesize textSecondaryColor=_textSecondaryColor;
@property(readonly, nonatomic) SKUIJSColor *textPrimaryColor; // @synthesize textPrimaryColor=_textPrimaryColor;
@property(readonly, nonatomic) SKUIJSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;

@end

