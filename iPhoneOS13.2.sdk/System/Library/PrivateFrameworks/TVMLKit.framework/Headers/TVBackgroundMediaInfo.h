//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVMediaInfo.h>

@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo
{
    IKAppPlayerBridge *_playerBridge;
}

@property(retain, nonatomic) IKAppPlayerBridge *playerBridge; // @synthesize playerBridge=_playerBridge;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

