//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCDraftAccessCheckable <NFCopying>
@property(readonly, nonatomic) _Bool isLocalDraft;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

