//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSTabCompletionMatch.h>

@class NSUUID;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch
{
    NSUUID *_tabUUID;
    NSUUID *_windowUUID;
    NSUInteger _tabIndex;
}

@property(readonly, nonatomic) NSUInteger tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
// - (void).cxx_destruct;
- (id)parsecDomainIdentifier;
- (id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(NSUInteger)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7;

@end

