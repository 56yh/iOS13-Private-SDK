//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class EMContentRequestOptions, EMObjectID, NSProgress;
@protocol EMContentItemRequestDelegate;

@protocol _EMDistantContentRepresentation 
- (void)invalidate;
- (NSProgress *)requestUpdatedRepresentationWithCompletion:(void (^)(EMContentRepresentation *, NSError *))arg1;
- (NSProgress *)requestRepresentationForItemWithObjectID:(EMObjectID *)arg1 options:(EMContentRequestOptions *)arg2 delegate:(id <EMContentItemRequestDelegate>)arg3 completionHandler:(void (^)(id <_EMDistantContentRepresentation>, EMContentRepresentation *, NSError *))arg4;
@end

