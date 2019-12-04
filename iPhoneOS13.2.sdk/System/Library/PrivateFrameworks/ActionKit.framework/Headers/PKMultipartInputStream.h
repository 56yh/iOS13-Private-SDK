//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSData, NSMutableArray, NSString;
@protocol NSStreamDelegate;

@interface PKMultipartInputStream : NSInputStream
{
    id <NSStreamDelegate> delegate;
    NSString *_boundary;
    unsigned long long _length;
    NSMutableArray *_parts;
    NSData *_footer;
    unsigned long long _currentPart;
    unsigned long long _delivered;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long delivered; // @synthesize delivered=_delivered;
@property(nonatomic) unsigned long long currentPart; // @synthesize currentPart=_currentPart;
@property(retain, nonatomic) NSData *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NSMutableArray *parts; // @synthesize parts=_parts;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04)arg3;
- (void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (void)close;
- (void)open;
- (_Bool)hasBytesAvailable;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)addPartWithHeaders:(id)arg1 path:(id)arg2;
- (void)addPartWithHeaders:(id)arg1 string:(id)arg2;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 stream:(id)arg3 streamLength:(unsigned long long)arg4;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (void)addPartWithName:(id)arg1 path:(id)arg2;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 data:(id)arg2 contentType:(id)arg3;
- (void)addPartWithName:(id)arg1 data:(id)arg2;
- (void)addPartWithName:(id)arg1 string:(id)arg2;
- (id)init;
- (void)updateLength;

@end

