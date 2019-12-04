//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKBRenderingContext : NSObject <NSCopying>
{
    _Bool _isFloating;
    unsigned long long _shiftState;
    UIKBRenderConfig *_renderConfig;
    long long _keyboardType;
    long long _handBias;
}

+ (id)renderingContextForRenderConfig:(id)arg1;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(nonatomic) long long handBias; // @synthesize handBias=_handBias;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(nonatomic) unsigned long long shiftState; // @synthesize shiftState=_shiftState;
- (void)dealloc;
- (id)initWithRenderConfig:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

