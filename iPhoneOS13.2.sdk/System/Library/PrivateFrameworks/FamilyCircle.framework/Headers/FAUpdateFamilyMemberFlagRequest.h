//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest
{
    NSNumber *_dsid;
    NSString *_flag;
    _Bool _enabled;
}

- (void)startRequestWithCompletionHandler:(id /* block */)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(_Bool)arg3;

@end

