//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FKTextCandidate : NSObject
{
    float _confidence;
    NSString *_text;
}

@property(readonly) float confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 confidence:(float)arg2;

@end

