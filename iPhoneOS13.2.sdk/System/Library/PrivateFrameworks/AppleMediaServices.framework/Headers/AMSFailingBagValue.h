//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSFailingBagValue : AMSFrozenBagValue
{
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)valueWithCompletion:(id /* block */)arg1;
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;

@end

