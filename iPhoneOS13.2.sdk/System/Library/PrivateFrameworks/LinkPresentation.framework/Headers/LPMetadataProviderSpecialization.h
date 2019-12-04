//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPMetadataProviderSpecializationContext, NSURL;
@protocol LPMetadataProviderSpecializationDelegate;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecialization : NSObject
{
    id <LPMetadataProviderSpecializationDelegate> _delegate;
    LPMetadataProviderSpecializationContext *_context;
}

+ (unsigned long long)specialization;
+ (_Bool)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
@property(readonly, nonatomic) LPMetadataProviderSpecializationContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <LPMetadataProviderSpecializationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *URL;
- (void)cancel;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

