//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, PRPeer;

@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    PRPeer *_sendingPeer;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) PRPeer *sendingPeer; // @synthesize sendingPeer=_sendingPeer;
@property(readonly) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 sendingPeer:(id)arg2;

@end

