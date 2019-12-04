//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StreamingZip/StreamingUnzipDelegateProtocol-Protocol.h>

@protocol SZExtractorDelegate;

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol>
{
    id <SZExtractorDelegate> delegate;
}

@property __weak id <SZExtractorDelegate> delegate; // @synthesize delegate;
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end

