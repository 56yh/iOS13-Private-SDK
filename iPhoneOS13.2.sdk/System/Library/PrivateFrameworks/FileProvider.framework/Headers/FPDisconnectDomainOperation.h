//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPProviderDomain, NSProgress;

@interface FPDisconnectDomainOperation : FPActionOperation
{
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (void)actionMain;
- (void)cancel;
- (void)_tryDisconnectingSafely:(_Bool)arg1;
- (id)initWithDomain:(id)arg1;

@end

