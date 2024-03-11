package RTS.util

import org.sireum._
import org.sireum.$internal.MutableMarker

trait MutableBase extends MutableMarker {
  def string: String = super.toString

  override def $clonable: Boolean = false

  override def $clonable_=(b: Boolean): MutableMarker = this

  override def $owned: Boolean = false

  override def $owned_=(b: Boolean): MutableMarker = this

  override def $clone: MutableMarker = this
}
