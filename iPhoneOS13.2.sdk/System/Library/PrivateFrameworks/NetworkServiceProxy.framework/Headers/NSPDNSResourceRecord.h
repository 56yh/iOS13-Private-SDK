//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSPDNSResourceRecord : NSObject
{
    long long _type;
    NSString *_name;
    long long _recordClass;
    unsigned long long _timeToLive;
    unsigned long long _dataLength;
    NSString *_resourceString;
}

+ (id)typeToString:(long long)arg1;
@property(readonly) NSString *resourceString; // @synthesize resourceString=_resourceString;
@property(readonly) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly) unsigned long long timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly) long long recordClass; // @synthesize recordClass=_recordClass;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) long long type; // @synthesize type=_type;
- (id)copyStateDictionary;
- (id)initFromByteParser:(id)arg1;

@end

