//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKVisitManager : NSObject
{
}

+ (id)fallbackVisit;
+ (id)sharedVisitManager;
- (id)anyVisit;
- (id)previousVisit;
- (id)currentVisit;
- (void)stopVisitUpdatesForToken:(struct NSString *)arg1;
- (struct NSString *)startVisitUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;

@end

