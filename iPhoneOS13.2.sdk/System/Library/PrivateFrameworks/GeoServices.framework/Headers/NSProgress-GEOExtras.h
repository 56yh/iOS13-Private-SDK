//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSProgress (GEOExtras)
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;
+ (id)_geo_mirroredProgressForReceivingOverXPC:(id *)arg1;
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;
+ (id)_geo_progressMirroringProgress:(id)arg1;
- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;
@end

