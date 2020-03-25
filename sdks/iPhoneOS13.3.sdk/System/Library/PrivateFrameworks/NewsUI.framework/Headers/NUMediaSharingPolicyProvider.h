//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXMediaSharingPolicyProvider-Protocol.h>

@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>
{
    id <FCHeadlineProviding> _headline;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger mediaSharingPolicy;
- (id)initWithHeadline:(id)arg1 appConfigurationManager:(id)arg2;

@end
