//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class NSArray, NSString;

@interface SSEnvironmentElementMetadata : NSObject <BSXPCCoding, SSLoggable>
{
    NSString *_userActivityTitle;
    NSArray *_rectsInElement;
}

@property(copy, nonatomic) NSArray *rectsInElement; // @synthesize rectsInElement=_rectsInElement;
@property(copy, nonatomic, setter=setUserActivityTitle:) NSString *userActivityTitle; // @synthesize userActivityTitle=_userActivityTitle;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)_decodedRectsForEncodedRects:(id)arg1;
- (id)_encodableRects;
@property(readonly, nonatomic) NSString *loggableDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

