//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;
@protocol IKNetworkRequestRecord;

@protocol IKNetworkRequestLoader 
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *parentIdentifier;
- (id <IKNetworkRequestRecord>)recordForResource:(long long)arg1 withInitiator:(long long)arg2;
@end

