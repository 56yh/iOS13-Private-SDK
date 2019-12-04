//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent
{
    double _downErrorDistance;
    double _upErrorDistance;
    _Bool _canComputeErrorDistance;
    _Bool _ignoreTapData;
    TIKeyboardInput *_input;
}

+ (id)makeInputEvent:(id)arg1 order:(long long)arg2 wordSeparator:(id)arg3 accentedLanguage:(_Bool)arg4;
@property(nonatomic) _Bool ignoreTapData; // @synthesize ignoreTapData=_ignoreTapData;
@property(retain, nonatomic) TIKeyboardInput *input; // @synthesize input=_input;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (double)touchUpErrorDistance;
- (double)touchDownErrorDistance;
- (void)_computeErrorDistance;
- (double)downUpTimeDelta;
- (id)upTouchEvent;
- (_Bool)isMissingATouch;
- (id)init:(id)arg1 type:(int)arg2 order:(long long)arg3;

@end

