//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFHKWorkoutContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)itemWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;
+ (id)itemWithWorkout:(id)arg1;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)sourceName;
- (id)workoutContainer;
- (id)workout;
- (id)readableActivityType;

@end

