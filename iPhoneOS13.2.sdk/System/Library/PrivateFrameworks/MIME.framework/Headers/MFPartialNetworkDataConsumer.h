//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSData, NSString;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer>
{
    id <MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
    NSData *_strippedData;
    unsigned long long _length;
    unsigned int _seenNetworkLineEndings:1;
}

- (void)purge;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (unsigned long long)length;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

