//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableData, NSString;

@interface ICSZStringWriter : NSObject <ICSAppendable>
{
    struct z_stream_s _strm;
    NSMutableData *_result;
}

@property(readonly, copy) NSString *description;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long long)arg2 andFlush:(_Bool)arg3;
- (id)zResult;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

