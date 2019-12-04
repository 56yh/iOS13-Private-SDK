//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cards/CRBasicPayloadCommand.h>

#import <Cards/CRPayloadCommand-Protocol.h>

@class NSDictionary, NSString;
@protocol CRCard, NSSecureCoding><NSCopying;

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand>
{
    id <CRCard> _nextCard;
}

@property(retain, nonatomic) id <CRCard> nextCard; // @synthesize nextCard=_nextCard;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

// Remaining properties
@property(nonatomic) unsigned long long commandDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *userInfo;

@end

