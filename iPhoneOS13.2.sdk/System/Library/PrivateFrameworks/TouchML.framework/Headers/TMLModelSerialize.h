//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLModelSerialize : NSObject
{
}

+ (id)verifySignature:(id)arg1;
+ (id)decodeZ85:(id)arg1;
+ (id)decode:(id)arg1;
+ (struct ProtobufCMessage *)unpackData:(id)arg1 withDescriptor:(const struct ProtobufCMessageDescriptor *)arg2;
+ (id)pack:(const struct ProtobufCMessage *)arg1;

@end

