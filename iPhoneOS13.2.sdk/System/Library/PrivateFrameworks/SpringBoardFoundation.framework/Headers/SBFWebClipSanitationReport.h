//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, UIWebClip;

@interface SBFWebClipSanitationReport : NSObject
{
    UIWebClip *_webClip;
    long long _result;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (id)description;
- (id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3;

@end

