//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>



@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    unsigned long long _flags;
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (_Bool)isFromMe;
- (id)conversationUUID;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

