//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
{
}

+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3;

@end

