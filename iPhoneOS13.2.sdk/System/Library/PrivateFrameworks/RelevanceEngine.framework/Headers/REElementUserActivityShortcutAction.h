//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction
{
    _Bool _isLocalDonation;
}

@property(readonly, nonatomic) _Bool isLocalDonation; // @synthesize isLocalDonation=_isLocalDonation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_submitMetricsWithSuccess:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(_Bool)arg3;

@end

