//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPBlockRecoveryAttempter : NSObject
{
    id /* block */ _recoveryBlock;
    NSError *_expectedError;
}

@property(nonatomic) __weak NSError *expectedError; // @synthesize expectedError=_expectedError;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)initWithBlock:(id /* block */)arg1;

@end

