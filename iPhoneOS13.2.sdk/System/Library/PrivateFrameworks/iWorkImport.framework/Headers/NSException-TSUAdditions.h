//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSException (TSUAdditions)
+ (_Bool)tsu_catchExceptionsInBlock:(id /* block */)arg1 error:(id *)arg2;
+ (void)tsu_raiseWithError:(id)arg1;
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
- (id)tsu_error;
- (int)sfu_localErrno;
@end
