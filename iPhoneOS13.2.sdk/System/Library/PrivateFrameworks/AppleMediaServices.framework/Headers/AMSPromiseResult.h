//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSPromiseResult : NSObject
{
    NSError *_error;
    id _result;
}

@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end

