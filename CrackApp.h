/*
 * iNalyzer5
 * https://github.com/appsec-labs/iNalyzer
 *
 * Security assesment framework for iOS application
 * by Chilik Tamir @_coreDump
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>



@interface CrackApp : NSObject {
    int overdrive_enabled;
    NSString *ipapath;
    NSDictionary *applicationDetails;
    BOOL cracked;
    
    NSString *application_basedir;
    NSString *workingDir;
    
}
/*
 TODO: Move cracking to a class
 
- (NSString*) crack_application;
- (NSString*) init_crack_binary;
 */
@end